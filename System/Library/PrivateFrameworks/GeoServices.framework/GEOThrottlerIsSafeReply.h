/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply> {

	double _nextSafeRequestTime;
	int _availableRequestCount;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (assign,nonatomic) double nextSafeRequestTime;                                 //@synthesize nextSafeRequestTime=_nextSafeRequestTime - In the implementation block
@property (assign,nonatomic) int availableRequestCount;                                  //@synthesize availableRequestCount=_availableRequestCount - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttlerToken;              //@synthesize throttlerToken=_throttlerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(double)nextSafeRequestTime;
-(void)setNextSafeRequestTime:(double)arg1 ;
-(int)availableRequestCount;
-(void)setAvailableRequestCount:(int)arg1 ;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
@end

