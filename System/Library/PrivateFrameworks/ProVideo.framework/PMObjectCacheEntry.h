/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PMObjectCacheEntry : NSObject {

	NSString* _cacheKey;
	unsigned _hashValue;
	id _item;
	unsigned long long _size;
	unsigned long long _lastAccess;
	float _freq;
	float _value;
	double _cost;

}
-(void)dealloc;
-(unsigned)hashValue;
-(id)cacheKey;
-(double)cost;
-(void)setCacheKey:(id)arg1 ;
-(id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5 ;
-(void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3 ;
-(void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3 ;
-(void)setLastAccess:(unsigned long long)arg1 ;
-(id)getItem;
-(unsigned long long)getSize;
-(unsigned long long)lastAccess;
-(float)getValue:(unsigned long long)arg1 decayRate:(float)arg2 ;
-(BOOL)canBePurgedFromCache;
@end

