/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;

}
-(id)init;
-(void)addOperation:(/*^block*/id)arg1 ;
-(id)evaluateWithInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)evaluatorWithInput:(id)arg1 ;
@end

