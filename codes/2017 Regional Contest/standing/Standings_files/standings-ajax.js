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

(function($) {
	var firstTime = true;

	this.escapeHTML = function (str) {
		return str.split('&').join('&amp;').split('<').join('&lt;').split('>').join('&gt;');
	}

	this.padNumber = function (num) {
		var s = '' + num;
		while (s.length < 2) s = '0' + s;
		return s;
	}

	this.timeToString = function (time) {
		if (time < 0)
			return '-' + timeToString(-time);
		var seconds = time % 60;
		var minutes = (time - seconds) / 60 % 60;
		var hours = (time - 60 * minutes - seconds) / 3600;
		return padNumber(hours) + ':' + padNumber(minutes) + ':' + padNumber(seconds);
	}

	this.debugHook = function (s) {
	}

	var dataCallback = function (text, textStatus) {
		var lines = text.split('\n');
		var newData = new Array();
		for (var i = 0; i < lines.length; i++)
			if (lines[i] != '') {
				var fields = lines[i].split('\t');
				if (fields.length > 0)
					newData.push(fields);
			}

		var rawHeader = newData[0];
		newData.shift();

		standingsUpdate(rawHeader, newData, firstTime);
		firstTime = false;
	}

	var update = function () {
		$.get('../standings/standings.txt', dataCallback, 'text');
	}

	$(document).ready(function() {
		$.ajaxSetup({cache: false});
		update();
		setInterval(function() { update() }, 5000);
	});
})(jQuery);
