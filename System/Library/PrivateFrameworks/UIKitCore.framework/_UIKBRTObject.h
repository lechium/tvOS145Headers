/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _UIKBRTObject : NSObject {

	NSMutableArray* _owner;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(id)previousEntry;
-(id)nextEntry;
@end
