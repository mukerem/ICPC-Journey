/*  Copyright (C) 2010-2011  Bruce Merry and Carl Hultquist
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

// ---------------------------------------------------------------------
// Standings related methods
// ---------------------------------------------------------------------

(function($)
{
	var data = [];
	var dataRegex = null;

	var STANDING_RAW_ID = 0;
	var STANDING_RAW_USERNAME = 1;
	var STANDING_RAW_FRIENDLYNAME = 2;
	var STANDING_RAW_GROUP = 3;
	var STANDING_RAW_CONTESTANT = 4;
	var STANDING_RAW_TOTAL_SOLVED = 5;
	var STANDING_RAW_TOTAL_TIME = 6;
	var STANDING_RAW_SOLVED = 7;

	var COLUMN_PLACE = 0;
	var COLUMN_USERNAME = 1;
	var COLUMN_FRIENDLYNAME = 2;
	var COLUMN_TOTAL_SOLVED = 3;
	var COLUMN_TOTAL_TIME = 4;
	var COLUMN_SOLVED = 5;

	this.getStandings = function ()
	{
		// Request a snapshot of the standings
		sendMessageBlock(
			{
				name: 'standings',
				headers: {}
			},
			function (msg) { standingsHandler(msg, true); }
		);
	}

	this.updateStandings = function (msg)
	{
		standingsHandler(msg, false);
	}

	var sameScore = function (arr1, arr2)
	{
		var L = arr1.length;
		if (arr2.length != L)
			return false;
		return arr1[STANDING_RAW_ID] == arr2[STANDING_RAW_ID]
			&& arr1[STANDING_RAW_TOTAL_SOLVED] == arr2[STANDING_RAW_TOTAL_SOLVED]
			&& arr1[STANDING_RAW_TOTAL_TIME] == arr2[STANDING_RAW_TOTAL_TIME];
	}

	var compareScore = function (arr1, arr2)
	{
		// Corresponds to CompareRankingStable in abacus include/score.h,
		// but returns <, =, or > 0 for use with sort().
		if (arr1[STANDING_RAW_TOTAL_SOLVED] != arr2[STANDING_RAW_TOTAL_SOLVED])
			return arr2[STANDING_RAW_TOTAL_SOLVED] - arr1[STANDING_RAW_TOTAL_SOLVED];
		else if (arr1[STANDING_RAW_TOTAL_TIME] != arr2[STANDING_RAW_TOTAL_TIME])
			return arr1[STANDING_RAW_TOTAL_TIME] - arr2[STANDING_RAW_TOTAL_TIME];
		else
		{
			username1 = arr1[STANDING_RAW_USERNAME];
			username2 = arr2[STANDING_RAW_USERNAME];
			if (username1 == username2)
				return 0;
			else if (username1 < username2)
				return -1;
			else
				return 1;
		}
	}

	// Adds a row to a standings table, replacing any with the same ID
	var addRow = function (data, newRow)
	{
		for (var row = 0; row < data.length; row++)
		{
			if (data[row][STANDING_RAW_ID] == newRow[STANDING_RAW_ID])
			{
				data[row] = newRow;
				return;
			}
		}
		// Not matched
		data.push(newRow);
	}

	/* Updates the table in response to either new data or an updated search.
	 * In the latter case, pass null for newData and false for full.
	 * Otherwise, full should be true to replace existing data and false to
	 * update it.
	 */
	var updateTable = function (newData, full)
	{
		var oldData = data;
		if (newData !== null)
		{
			if (full)
				data = newData;
			else
			{
				// Clone the original
				data = new Array();
				for (var oldRow = 0; oldRow < oldData.length; oldRow++)
				{
					data.push(oldData[oldRow]);
				}

				// Need to replace rows with the same ID. newData will normally
				// have just one entry in this case, so it's not as inefficient
				// as it looks.
				for (var newRow = 0; newRow < newData.length; newRow++)
					addRow(data, newData[newRow]);
			}
			data.sort(compareScore);
		}

		var box = $('#standings-searchbox');
		try
		{
			if (box[0].value == '')
				dataRegex = null;
			else
				dataRegex = new RegExp(box[0].value, 'i');
			box.removeClass('invalid');
		}
		catch (ex)
		{
			box.addClass('invalid');
		}

		var html = '';
		var seen = {};
		var oldRow = 0;
		var highlightRows = [];
		var lastSolved;
		var lastTime;
		var tiePlace = 1;
		var row;
		var parity = 1;
		for (row = 0; row < data.length; row++)
		{
			var classes = (parity & 1) ? 'odd' : 'even';
			if (oldData !== data)
			{
				while (oldRow < oldData.length
					   && typeof(seen[oldData[oldRow][STANDING_RAW_ID]]) != 'undefined')
					oldRow = oldRow + 1;
				if (!full &&
					(oldRow >= oldData.length || !sameScore(oldData[oldRow], data[row])))
					classes += ' do-highlight';
			}

			var C = data[row].length;
			if (lastSolved != data[row][STANDING_RAW_TOTAL_SOLVED] || lastTime != data[row][STANDING_RAW_TOTAL_TIME])
				tiePlace = row + 1;
			lastSolved = data[row][STANDING_RAW_TOTAL_SOLVED];
			lastTime = data[row][STANDING_RAW_TOTAL_TIME];

			if (dataRegex !== null && data[row][STANDING_RAW_USERNAME].match(dataRegex))
				classes += ' search';

			html += '<tr class="' + classes + '">';
			var fields = [];
			var fieldclass = [];
			fields[COLUMN_PLACE] = tiePlace;
			fieldclass[COLUMN_PLACE] = 'column-place';
			fields[COLUMN_USERNAME] = escapeHTML(data[row][STANDING_RAW_USERNAME]);
			fieldclass[COLUMN_USERNAME] = 'column-username';
			fields[COLUMN_FRIENDLYNAME] = escapeHTML(data[row][STANDING_RAW_FRIENDLYNAME]);
			fieldclass[COLUMN_FRIENDLYNAME] = 'column-friendlyname';
			fields[COLUMN_TOTAL_TIME] = escapeHTML(timeToString(data[row][STANDING_RAW_TOTAL_TIME]));
			fieldclass[COLUMN_TOTAL_TIME] = 'column-total-time';
			fields[COLUMN_TOTAL_SOLVED] = escapeHTML(data[row][STANDING_RAW_TOTAL_SOLVED]);
			fieldclass[COLUMN_TOTAL_SOLVED] = 'column-total-solved';
			for (var i = STANDING_RAW_SOLVED; i < data[row].length; i++)
			{
				fieldclass.push('column-solved');
				if (data[row][i] > 1)
					fields.push('<span class="correct">+' + (data[row][i] - 1) + '</span>');
				else if (data[row][i] == 1)
					fields.push('<span class="correct">+</span>')
				else if (data[row][i] < 0)
					fields.push('<span class="incorrect">&minus;' + (-data[row][i]) + '</span>');
				else
					fields.push('');
			}
			for (var f = 0; f < fields.length; f++)
				html += '<td class="' + fieldclass[f] + '">' + fields[f] + '</td>';
			html += '</tr>';
			parity++;

			seen[data[row][STANDING_RAW_ID]] = 1;
		}

		$('#standings-tbody').html(html);
		if (oldData !== data)
			$('.do-highlight').effect('highlight', {color: '#33ff33'}, 3000);
	}

	// Retrieves one row of a grid from abacus' grid format
	var getRow = function (msg, r, ncols)
	{
		var row = new Array();
		var prefix = 'row_' + r + '_'
		for (var j = 0; j < ncols; j++)
		{
			row.push(msg.data.headers[prefix + j]);
		}
		return row;
	}

	this.standingsUpdate = function (rawHeader, newData, full)
	{
		var html = '';
		for (var i = 0; i < rawHeader.length - STANDING_RAW_SOLVED; i++)
			html += '<col />';
		$('colgroup.problem').html(html);

		html = '<tr><th>Place</th><th>Team</th><th>Name</th><th>Points</th><th>Time</th>';
		for (var i = STANDING_RAW_SOLVED; i < rawHeader.length; i++)
			html += '<th>' + escapeHTML(rawHeader[i]) + '</th>';
		html += '</tr>';
		$('#standings-thead').html(html);

		updateTable(newData, full);

		$('#standings-updatedat').text('Updated at ' + new Date());
	}

	var standingsHandler = function (msg, full)
	{
		var newData = new Array();
		var nrows = msg.data.headers.nrows;
		var ncols = msg.data.headers.ncols;
		var rawHeader = getRow(msg, 0, ncols);

		for (var i = 1; i < nrows; i++)
			newData.push(getRow(msg, i, ncols));

		standingsUpdate(rawHeader, newData, full);
	}

	$(document).ready(function()
	{
		$('#standings-searchbox').keypress(function(e)
		{
			// If we try to do this immediately, we get the old input value
			setTimeout(function() { updateTable(null, false); }, 0);
		});
		$('#standings-searchbox').keyup(function(e)
		{
			// IE doesn't send backspace through keypress
			if (e.which == 8)
				setTimeout(function() { updateTable(null, false); }, 0);
			// Use enter for debug hooks
			if (e.which == 13)
			{
				var box = $('#standings-searchbox');
				debugHook(box[0].value);
			}
		});
	});
})(jQuery);
