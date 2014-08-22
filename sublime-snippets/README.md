# Drupal Sublime Text debugging snippets
This directory contains some handy snippets for debugging drupal code with Sublime Text 3. Each snippet is bound to a tab trigger, so you can type the short trigger and have the relevant command expanded easily.

To use - simply drop the files in your Sublime Text snippets folder (`/home/<user>/.config/sublime-text-3/Packages/User` on Linux).

## dpm() a variable
This snippet can be triggered by typing `dpm<tab>`. It will insert a dpm command and prompt for a variable to pass to dpm. The variable name will also be used as the second argument to the dpm() call so you can easily see which dpm() is which in your output.

It expands as follows:
```php
dpm($this, 'this');
```

So - typing `dpm<tab>foo` will result in:
```php
dpm($foo, 'foo');
```

## Send a variable to the watchdog log
Triggered by `wd<tab>`, this code outputs the value of a variable to the watchdog log, labelled with the current function name and line number, e.g. `wd<tab>foo` will expand to:
```php
watchdog(__FUNCTION__ . ": " . __LINE__, print_r($foo,1));
```

## Checking that code execution reached a certain point
Automatically outputs the function, and line number with a label of "HERE" so you can see that your code reached a certain execution point. Triggered by `here<tab>`, this expands to:
```php
dpm(__FUNCTION__ . ": " . __LINE__, 'HERE');
```

## print_r()-ing a variable
Triggered by `pr<tab>`, this wraps the variable in a call to print_r(), e.g. `pr<tab>foo` will expand to:
```php
print_r($foo);
```
