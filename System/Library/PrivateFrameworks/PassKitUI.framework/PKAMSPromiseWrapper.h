/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@class AMSPromise, NSString;

@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _invalidated;
	BOOL _canceled;
	AMSPromise* _promise;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)invalidate;
-(void)cancel;
-(BOOL)isInvalidated;
-(BOOL)isCanceled;
-(id)initWithAMSPromise:(id)arg1 ;
@end

