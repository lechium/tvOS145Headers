/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IMAccount;

@interface IMCoreAutomationHook : NSObject {

	IMAccount* _imessageAccount;

}

@property (readonly) IMAccount * bestiMessageAccount; 
+(id)stringFromAutomationErrorCode:(long long)arg1 ;
-(IMAccount *)bestiMessageAccount;
-(id)chatForHandles:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)handlesFromStrings:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)existingChatForGroupID:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
@end

