/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSAccountRegistrationDelegate <NSObject>
@optional
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;

@end

