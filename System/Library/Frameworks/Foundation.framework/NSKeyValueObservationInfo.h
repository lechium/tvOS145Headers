/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {

	NSArray* _observances;
	unsigned long long _cachedHash;
	BOOL _cachedIsShareable;

}

@property (nonatomic,readonly) BOOL containsOnlyInternalObservationHelpers; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)_copyByAddingObservance:(id)arg1 ;
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3 ;
-(BOOL)containsOnlyInternalObservationHelpers;
@end

