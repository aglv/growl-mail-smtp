//
//  EmailWindowComtroller.h
//  smtp
//
//  Created by Alessandro Volz on 08.06.11.
//  Copyright 2011 OsiriX Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface SMTPClientWindowController : NSWindowController {
	IBOutlet NSTextField* _addressField;
	IBOutlet NSTextField* _portField;
	IBOutlet NSMatrix* _tlsMatrix;
	IBOutlet NSTextField* _fromField;
	IBOutlet NSButton* _authCheckbox;
	IBOutlet NSTextField* _usernameField;
	IBOutlet NSTextField* _passwordField;
	IBOutlet NSTextField* _toField;
	IBOutlet NSTextField* _subjectField;
	IBOutlet NSTextField* _messageField;
	IBOutlet NSTextField* _statusField;
}

-(void)setStatus:(NSString*)str;

-(IBAction)sendAction:(id)sender;

@end
