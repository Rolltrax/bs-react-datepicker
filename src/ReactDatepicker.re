open MomentRe;

module DatePicker = {

  [@bs.module "react-datepicker"]
  external reactClass : ReasonReact.reactClass = "default";

  
  [@bs.deriving jsConverter]
  type dropdownMode = [
    | [@bs.as "scroll"] `Scroll
    | [@bs.as "select"] `Select
  ];

  type dateFormat = [
    | `Str(string)
    | `Int(int)
  ];


  let make =
    (~adjustDateOnChange: option(bool) = ?,
     ~allowSameDay: option(bool) = ?,
     ~autoComplete: option(string) = ?,
     ~autoFocus: option(bool) = ?,
     ~calendarClassName: option(string) = ?,
     ~calendarContainer: option(unit) = ?,
     /* TODO: Find a way to implement ~children*/
     ~className: option(string) = ?,
     ~customInput: option(Dom.htmlElement) = ?,
     ~customInputRef: option(string) = ?,
     ~dateFormat: option(dateFormat) = ?,
     ~dateFormatString: option(string) = ?,
     ~dayClassName: option(unit) = ?,
     ~disabled: option(bool) = ?,
     ~disabledKeyboardNavigation: option(bool) = ?,
     ~dropdownMode: dropdownMode,
     ~endDate: option(Js.t({.. })) = ?,
     ~excludeDates: option(array(string)) = ?,
     ~filterDate: option(unit) = ?,
     ~fixedHeight: option(bool) = ?,
     ~formatWeekNumber: option(unit) = ?,
     ~highlightDates: option(array(string)) = ?,
     ~id: option(string) = ?,
     ~includeDates: option(array(string)) = ?,
     ~includeTimes: option(array(string)) = ?,
     ~injectTimes: option(array(string)) = ?,
     ~inline: option(bool) = ?,
     ~isClearable: option(bool) = ?,
     ~locale: option(string) = ?,
     ~maxDate: option(Js.t({..})) = ?,
     ~minDate: option(Js.t({..})) = ?,
     ~monthsShown: option(int) = ?,
     ~name: option(string) = ?,
     ~onBlur: option(unit) = ?,
     ~onChange: Moment.t => unit,
     ~onSelect: option(Moment.t => unit) = ?,
     ~onWeekSelect: option(Moment.t => unit) = ?,
     ~onClickOutside: option(Js.t({..}) => unit) = ?,
     ~openToDate: option(Moment.t) = ?,
     ~peekNextMonth: option(bool) = ?,
     ~placeholderText: option(string) = ?,
     ~preventOpenOnFocus: option(bool) = ?,
     ~readOnly: option(bool) = ?,
     ~required: option(bool) = ?,
     ~scrollableYearDropdown: option(bool) = ?,
     ~scrollableMonthYearDropdown: option(bool) = ?,
     ~selected: option(Moment.t) = ?,
     ~selectsEnd: option(bool) = ?,
     ~selectsStart: option(bool) = ?,
     ~showMonthDropdown: option(bool) = ?,
     ~showMonthYearDropdown: option(bool) = ?,
     ~showWeekNumbers: option(bool) = ?,
     ~showYearDropdown: option(bool) = ?,
     ~forceShowMonthNavigation: option(bool) = ?,
     ~showDisabledMonthNavigation: option(bool) = ?,
     ~startDate: option(Moment.t) = ?,
     ~startOpen: option(bool) = ?,
     ~tabIndex: option(int) = ?, 
     ~timeCaption: option(string) = ?,
     ~title: option(string) = ?,
     ~todayButton: option(string) = ?,
     ~useWeekdaysShort: option(bool) =?,
     ~formatWeekDay: option(unit) = ?,
     ~utcOffset: option(int) = ?,
     ~value: option(string) = ?,
     ~weekLabel: option(string) = ?,
     ~withPortal: option(bool) = ?,
     ~yearDropdownItemNumber: option(int) = ?,
     ~shouldCloseOnSelect: option(bool) = ?,
     ~showTimeSelect: option(bool) = ?,
     ~showTimeSelectOnly: option(bool) = ?,
     ~timeFormat: option(string) = ?,
     ~timeIntervals: option(int) = ?,
     ~minTime: option(Moment.t) = ?,
     ~maxTime: option(Moment.t) = ?,
     ~excludeTimes: option(array(Moment.t)) = ?,
     ~useShortMonthInDropdown: option(bool) = ?,
     ~clearButtonTitle: option(string) = ?,
     ~previousMonthButtonLabel: option(string) = ?,
     ~nextMonthButtonLabel: option(string) = ?
    ) =>
    ReasonReact.wrapJsForReason
      (~reactClass,
       ~props=Js.Nullable.({
          "adjustDateOnChange": fromOption(adjustDateOnChange),
          "allowSameDay": fromOption(allowSameDay),
          "autoComplete": fromOption(autoComplete),
          "autoFocus": fromOption(autoFocus),
          "calendarClassName": fromOption(calendarClassName),
          "calendarContainer": fromOption(calendarContainer),
          "className": fromOption(className),
          "customInput": fromOption(customInput),
          "customInputRef": fromOption(customInputRef),
          "dateFormat": fromOption(dateFormat),
          "dateFormatString": fromOption(dateFormatString),
          "dayClassName": fromOption(dayClassName),
          "disabled": fromOption(disabled),
          "disabledKeyboardNavigation": fromOption(disabledKeyboardNavigation),
          "dropdownMode": dropdownMode,
          "endDate": fromOption(endDate),
          "excludeDates": fromOption(excludeDates),
          "filterDate": fromOption(filterDate),
          "fixedHeight": fromOption(fixedHeight),
          "formatWeekNumber": fromOption(formatWeekNumber),
          "highlightDates": fromOption(highlightDates),
          "id": fromOption(id),
          "includeDates": fromOption(includeDates),
          "includeTimes": fromOption(includeTimes),
          "injectTimes": fromOption(injectTimes),
          "inline": fromOption(inline),
          "isClearable": fromOption(isClearable),
          "locale": fromOption(locale),
          "maxDate": fromOption(maxDate),
          "minDate": fromOption(minDate),
          "monthsShown": fromOption(monthsShown),
          "name": fromOption(name),
          "onBlur": fromOption(onBlur),
          "onChange": onChange,
          "onSelect": fromOption(onSelect),
          "onWeekSelect": fromOption(onWeekSelect),
          "onClickOutside": fromOption(onClickOutside),
          "openToDate": fromOption(openToDate),
          "peekNextMonth": fromOption(peekNextMonth),
          "placeholderText": fromOption(placeholderText),
          "preventOpenOnFocus": fromOption(preventOpenOnFocus),
          "readOnly": fromOption(readOnly),
          "required": fromOption(required),
          "scrollableYearDropdown": fromOption(scrollableYearDropdown),
          "scrollableMonthYearDropdown": fromOption(scrollableMonthYearDropdown),
          "selected": fromOption(selected),
          "selectsEnd": fromOption(selectsEnd),
          "selectsStart": fromOption(selectsStart),
          "showMonthDropdown": fromOption(showMonthDropdown),
          "showMonthYearDropdown": fromOption(showMonthYearDropdown),
          "showWeekNumbers": fromOption(showWeekNumbers),
          "showYearDropdown": fromOption(showYearDropdown),
          "forceShowMonthNavigation": fromOption(forceShowMonthNavigation),
          "showDisabledMonthNavigation": fromOption(showDisabledMonthNavigation),
          "startDate": fromOption(startDate),
          "startOpen": fromOption(startOpen),
          "tabIndex": fromOption(tabIndex),
          "timeCaption": fromOption(timeCaption),
          "title": fromOption(title),
          "todayButton": fromOption(todayButton),
          "useWeekdaysShort": fromOption(useWeekdaysShort),
          "formatWeekDay": fromOption(formatWeekDay),
          "utcOffset": fromOption(utcOffset),
          "value": fromOption(value),
          "weekLabel": fromOption(weekLabel),
          "withPortal": fromOption(withPortal),
          "yearDropdownItemNumber": fromOption(yearDropdownItemNumber),
          "shouldCloseOnSelect": fromOption(shouldCloseOnSelect),
          "showTimeSelect": fromOption(showTimeSelect),
          "showTimeSelectOnly": fromOption(showTimeSelectOnly),
          "timeFormat": fromOption(timeFormat),
          "timeIntervals": fromOption(timeIntervals),
          "minTime": fromOption(minTime),
          "maxTime": fromOption(maxTime),
          "excludeTimes": fromOption(excludeTimes),
          "useShortMonthInDropdown": fromOption(useShortMonthInDropdown),
          "clearButtonTitle": fromOption(clearButtonTitle),
          "previousMonthButtonLabel": fromOption(previousMonthButtonLabel),
          "nextMonthButtonLabel": fromOption(nextMonthButtonLabel),
        })
      );
};