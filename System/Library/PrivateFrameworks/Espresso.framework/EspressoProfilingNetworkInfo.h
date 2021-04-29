/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString;

@interface EspressoProfilingNetworkInfo : NSObject {

	NSMutableArray* _layers;
	NSString* _network_at_path;

}

@property (retain) NSMutableArray * layers;                 //@synthesize layers=_layers - In the implementation block
@property (retain) NSString * network_at_path;              //@synthesize network_at_path=_network_at_path - In the implementation block
-(NSMutableArray *)layers;
-(void)setLayers:(NSMutableArray *)arg1 ;
-(NSString *)network_at_path;
-(void)setNetwork_at_path:(NSString *)arg1 ;
@end
