/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMFObjectObserver : HMFObject {

	id _observedObject;
	/*^block*/id _deallocationBlock;
	unsigned long long _cachedHash;

}

@property (readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak,readonly) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
@property (copy) id deallocationBlock;                           //@synthesize deallocationBlock=_deallocationBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(unsigned long long)cachedHash;
-(id)initWithObservedObject:(id)arg1 ;
-(void)_startObserving;
-(void)_stopObserving;
-(id)observedObject;
-(id)deallocationBlock;
-(void)setDeallocationBlock:(id)arg1 ;
@end

