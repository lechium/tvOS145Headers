/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>

@protocol WFWiFiGasProxy;
@class NSSet;

@interface WFGasOperation : WFOperation {

	NSSet* _results;
	id<WFWiFiGasProxy> _gasProxy;
	NSSet* _networks;
	unsigned long long _elements;

}

@property (nonatomic,retain) id<WFWiFiGasProxy> gasProxy;              //@synthesize gasProxy=_gasProxy - In the implementation block
@property (nonatomic,retain) NSSet * networks;                         //@synthesize networks=_networks - In the implementation block
@property (retain) NSSet * results;                                    //@synthesize results=_results - In the implementation block
@property (assign) unsigned long long elements;                        //@synthesize elements=_elements - In the implementation block
-(void)start;
-(unsigned long long)elements;
-(NSSet *)results;
-(void)setElements:(unsigned long long)arg1 ;
-(NSSet *)networks;
-(void)setNetworks:(NSSet *)arg1 ;
-(void)setResults:(NSSet *)arg1 ;
-(id)initWithGasProxy:(id)arg1 networks:(id)arg2 elements:(unsigned long long)arg3 ;
-(void)_processGasResults:(id)arg1 error:(int)arg2 ;
-(id<WFWiFiGasProxy>)gasProxy;
-(void)setGasProxy:(id<WFWiFiGasProxy>)arg1 ;
@end

