/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <NetworkRelay/NRLinkPreferences.h>

@class NSNumber;

@interface NRBluetoothLinkPreferences : NRLinkPreferences {

	NSNumber* _inputBytesPerSecond;
	NSNumber* _outputBytesPerSecond;
	NSNumber* _packetsPerSecond;

}

@property (nonatomic,retain) NSNumber * inputBytesPerSecond;               //@synthesize inputBytesPerSecond=_inputBytesPerSecond - In the implementation block
@property (nonatomic,retain) NSNumber * outputBytesPerSecond;              //@synthesize outputBytesPerSecond=_outputBytesPerSecond - In the implementation block
@property (nonatomic,retain) NSNumber * packetsPerSecond;                  //@synthesize packetsPerSecond=_packetsPerSecond - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)copyShortDescription;
-(BOOL)isNotEmpty;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
-(void)setPacketsPerSecond:(NSNumber *)arg1 ;
-(void)setOutputBytesPerSecond:(NSNumber *)arg1 ;
-(void)setInputBytesPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)inputBytesPerSecond;
-(NSNumber *)outputBytesPerSecond;
-(NSNumber *)packetsPerSecond;
@end

