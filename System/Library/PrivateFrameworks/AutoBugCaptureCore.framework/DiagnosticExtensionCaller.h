/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DEExtensionManager, NSMutableArray;

@interface DiagnosticExtensionCaller : NSObject {

	DEExtensionManager* _manager;
	NSMutableArray* _liveDEs;

}
+(id)sharedInstance;
+(BOOL)getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)init;
-(id)_getDEExtensionWithIdentifier:(id)arg1 ;
-(BOOL)_getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
@end

