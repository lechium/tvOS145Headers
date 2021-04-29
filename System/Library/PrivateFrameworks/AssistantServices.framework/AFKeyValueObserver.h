/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFKeyValueObserving.h>

@class AFOneArgumentSafetyBlock, AFKeyValueObservingDeliveryOptions, NSString;

@interface AFKeyValueObserver : NSObject <AFKeyValueObserving> {

	AB _isInvalid;
	AFOneArgumentSafetyBlock* _invalidation;
	/*^block*/id _handler;
	AFKeyValueObservingDeliveryOptions* _deliveryOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_handleObservedChangeWithOldValue:(id)arg1 andNewValue:(id)arg2 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 handler:(/*^block*/id)arg3 deliveryOptions:(id)arg4 ;
@end
