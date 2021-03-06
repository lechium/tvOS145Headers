/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface TVCKStoreBumperConfig : NSObject {

	NSURL* _videoURL;
	NSString* _warningTextFormatString;
	NSString* _appleIDFormatString;
	NSString* _logoURLTemplateString;
	double _textDwellTime;

}

@property (nonatomic,retain) NSURL * videoURL;                                //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSString * warningTextFormatString;              //@synthesize warningTextFormatString=_warningTextFormatString - In the implementation block
@property (nonatomic,retain) NSString * appleIDFormatString;                  //@synthesize appleIDFormatString=_appleIDFormatString - In the implementation block
@property (nonatomic,retain) NSString * logoURLTemplateString;                //@synthesize logoURLTemplateString=_logoURLTemplateString - In the implementation block
@property (assign,nonatomic) double textDwellTime;                            //@synthesize textDwellTime=_textDwellTime - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setTextDwellTime:(double)arg1 ;
-(NSString *)warningTextFormatString;
-(NSString *)appleIDFormatString;
-(double)textDwellTime;
-(void)setWarningTextFormatString:(NSString *)arg1 ;
-(void)setAppleIDFormatString:(NSString *)arg1 ;
-(NSString *)logoURLTemplateString;
-(void)setLogoURLTemplateString:(NSString *)arg1 ;
@end

