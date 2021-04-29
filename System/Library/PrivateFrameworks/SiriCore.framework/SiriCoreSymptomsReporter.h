/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SiriCoreSymptomsReporter : NSObject
+(id)sharedInstance;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(BOOL)arg6 triggerForIDSIdentifiers:(id)arg7 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(BOOL)arg6 triggerForIDSIdentifiers:(id)arg7 withPcap:(BOOL)arg8 ;
-(id)_processNameForPid:(int)arg1 ;
-(void)_getTypeForError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 withPcap:(BOOL)arg6 ;
-(id)_subtypeContextStringFromContext:(id)arg1 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 triggerForIDSIdentifiers:(id)arg6 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 ;
@end

