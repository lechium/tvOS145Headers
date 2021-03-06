/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSArray;

@interface TVLALSCalibrationData : NSObject {

	NSNumber* _channels;
	NSNumber* _wavelengthStartVisible;
	NSNumber* _wavelengthStartNIR;
	NSNumber* _wavelengthEnd;
	NSNumber* _wavelengthStep;
	NSNumber* _reserved;
	NSArray* _spectrumNom;

}

@property (nonatomic,retain) NSNumber * channels;                            //@synthesize channels=_channels - In the implementation block
@property (nonatomic,retain) NSNumber * wavelengthStartVisible;              //@synthesize wavelengthStartVisible=_wavelengthStartVisible - In the implementation block
@property (nonatomic,retain) NSNumber * wavelengthStartNIR;                  //@synthesize wavelengthStartNIR=_wavelengthStartNIR - In the implementation block
@property (nonatomic,retain) NSNumber * wavelengthEnd;                       //@synthesize wavelengthEnd=_wavelengthEnd - In the implementation block
@property (nonatomic,retain) NSNumber * wavelengthStep;                      //@synthesize wavelengthStep=_wavelengthStep - In the implementation block
@property (nonatomic,retain) NSNumber * reserved;                            //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,retain) NSArray * spectrumNom;                          //@synthesize spectrumNom=_spectrumNom - In the implementation block
+(id)instanceFromDictionary:(id)arg1 ;
-(NSNumber *)reserved;
-(id)dictionaryRepresentation;
-(NSNumber *)channels;
-(void)setReserved:(NSNumber *)arg1 ;
-(void)setChannels:(NSNumber *)arg1 ;
-(NSNumber *)wavelengthStartVisible;
-(NSNumber *)wavelengthEnd;
-(NSNumber *)wavelengthStep;
-(NSArray *)spectrumNom;
-(NSNumber *)wavelengthStartNIR;
-(void)setSpectrumNom:(NSArray *)arg1 ;
-(void)setWavelengthStartVisible:(NSNumber *)arg1 ;
-(void)setWavelengthStartNIR:(NSNumber *)arg1 ;
-(void)setWavelengthEnd:(NSNumber *)arg1 ;
-(void)setWavelengthStep:(NSNumber *)arg1 ;
@end

