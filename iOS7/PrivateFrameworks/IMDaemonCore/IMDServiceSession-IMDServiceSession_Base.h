/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMDaemonCore/IMDServiceSession.h>

@class NSDictionary;

@interface IMDServiceSession (IMDServiceSession_Base)
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateProfile;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;
- (_Bool)shouldImitateGroupChatUsingChatRooms;
- (id)defaultChatSuffix;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)stopWatchingBuddy:(id)arg1;
- (void)startWatchingBuddy:(id)arg1;
- (void)requestSubscriptionTo:(id)arg1;
- (void)acceptSubscriptionRequest:(_Bool)arg1 from:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (void)requestGroups;
- (void)setIdleTime:(unsigned int)arg1;
- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;
- (_Bool)blockIdleStatus;
- (void)setBlockIdleStatus:(_Bool)arg1;
- (id)blockList;
- (void)setBlockList:(id)arg1;
- (id)allowList;
- (void)setAllowList:(id)arg1;
- (unsigned int)blockingMode;
- (void)setBlockingMode:(unsigned int)arg1;
- (unsigned long long)capabilities;
- (void)loginServiceSession;
- (void)passwordUpdated;
- (void)accountDefaultsChanged:(id)arg1;
- (void)_abandonSystemProxySettingsFetcher;
- (void)_abandonPWFetcher;
- (void)noteBadPassword;
- (id)loginID;
@property(readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) int registrationStatus;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)authenticateAccount;
- (id)server;
- (_Bool)hasCapability:(unsigned long long)arg1;
@end

