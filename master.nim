import templates

# Views
proc layout*(title, content: string): string = tmpli html"""
    <!DOCTYPE html>
    <link rel="stylesheet" href="/styles.css">
    <title>Sample - $title</title>
    <div id=container>
        <h1>$title</h1>
        <div id=content>
            $content
        </div>
    </div>
    """