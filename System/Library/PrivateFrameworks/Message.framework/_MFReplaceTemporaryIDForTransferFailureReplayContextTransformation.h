/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFReplaceTemporaryIDForTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {

	NSString* _temporaryID;
	NSString* _newTemporaryID;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithTemporaryID:(id)arg1 newTemporaryID:(id)arg2 ;
@end
