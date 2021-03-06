/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ISServerAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    _Bool _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property(retain) ISDialogButton *performedButton; // @synthesize performedButton=_performedButton;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property _Bool performsButtonAction; // @synthesize performsButtonAction=_performsButtonAction;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (_Bool)_shouldAuthenticateForButton:(id)arg1;
- (_Bool)_handleSelectedButton:(id)arg1;
- (_Bool)_copySelectedButton:(id *)arg1 returningError:(id *)arg2;
- (id)_copyButtonForDialogSkip;
- (id)_copyAuthenticationContext;
- (_Bool)_copyAccountIdentifier:(id *)arg1 returningError:(id *)arg2;
- (void)run;
- (void)dealloc;
- (id)init;

@end

