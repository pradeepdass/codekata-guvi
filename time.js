var cc = new Date("9/13/2012 12:00 AM");
var c = new Date();

function timeDifference(d, dd) {
    var minute = 60 * 1000,
        hour = minute * 60,
        day = hour * 24,
        month = day * 30,
        ms = Math.abs(d - dd);

    var months = parseInt(ms / month, 10);

        ms -= months * month;

    var days = parseInt(ms / day, 10);

        ms -= days * day;

    var hours = parseInt(ms / hour, 10);

        ms -= hours * hour;
    var minutes = parseInt(ms / minute, 10);

    return [
        months + " months",
        days + " days",
        hours + " hours",
        minutes + " minutes"
    ].join(", ");
};

document.body.innerHTML += timeDifference(cc, c) + "<br />";
