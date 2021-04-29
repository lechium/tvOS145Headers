/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface TSMTIEMask : NSObject {

	NSArray* _elements;
	NSString* _name;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)UDPHardwareMask;
+(id)UDPSoftwareMask;
+(id)gPTPMask1;
+(id)gPTPMask2;
+(id)gPTPMask3;
+(id)gPTP7Hop;
+(id)gPTP1Hop;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
-(BOOL)mtieConformsToMask:(id)arg1 withErrors:(id*)arg2 ;
-(id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3 ;
@end

