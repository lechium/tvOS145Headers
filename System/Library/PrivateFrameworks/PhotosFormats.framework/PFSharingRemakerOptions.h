/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSDate, NSString, NSURL;

@interface PFSharingRemakerOptions : NSObject <NSCopying> {

	BOOL _shouldStripLocation;
	BOOL _shouldStripAllMetadata;
	BOOL _shouldConvertToSRGB;
	BOOL _shouldStripCaption;
	BOOL _shouldStripAccessibilityDescription;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customCaption;
	NSString* _customAccessibilityLabel;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	NSString* _exportPreset;
	NSString* _exportFileType;

}

@property (assign,nonatomic) BOOL shouldStripLocation;                              //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAllMetadata;                           //@synthesize shouldStripAllMetadata=_shouldStripAllMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                              //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                             //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                                     //@synthesize customDate=_customDate - In the implementation block
@property (assign,nonatomic) BOOL shouldStripCaption;                               //@synthesize shouldStripCaption=_shouldStripCaption - In the implementation block
@property (nonatomic,copy) NSString * customCaption;                                //@synthesize customCaption=_customCaption - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAccessibilityDescription;              //@synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                     //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (nonatomic,copy) NSURL * outputDirectoryURL;                              //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                               //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * exportPreset;                                 //@synthesize exportPreset=_exportPreset - In the implementation block
@property (nonatomic,copy) NSString * exportFileType;                               //@synthesize exportFileType=_exportFileType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)outputFilename;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)outputDirectoryURL;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(CLLocation *)customLocation;
-(void)setCustomCaption:(NSString *)arg1 ;
-(NSString *)customCaption;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(void)setShouldStripCaption:(BOOL)arg1 ;
-(BOOL)shouldStripCaption;
-(void)setShouldStripAccessibilityDescription:(BOOL)arg1 ;
-(BOOL)shouldStripAccessibilityDescription;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(BOOL)shouldConvertToSRGB;
-(NSDate *)customDate;
-(void)setCustomDate:(NSDate *)arg1 ;
-(BOOL)shouldStripAllMetadata;
-(void)setShouldStripAllMetadata:(BOOL)arg1 ;
-(NSString *)exportPreset;
-(void)setExportPreset:(NSString *)arg1 ;
-(NSString *)exportFileType;
-(void)setExportFileType:(NSString *)arg1 ;
@end

