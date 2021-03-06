/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVContentItem.h>
#import <TVSearchServices/TVJSSearchContentItem.h>

@class NSString, NSNumber;

@interface TVSSContentItem : TVContentItem <TVJSSearchContentItem> {

	BOOL _isEvod;
	NSString* _subtitle;
	NSString* _UTSContentType;
	NSString* _URLFormatString;
	NSNumber* _imageHeight;
	NSNumber* _imageWidth;
	NSString* _imagesJSONContentPayload;

}

@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * UTSContentType; 
@property (nonatomic,copy,readonly) NSString * URLFormatString; 
@property (nonatomic,copy,readonly) NSNumber * imageHeight; 
@property (nonatomic,copy,readonly) NSNumber * imageWidth; 
@property (nonatomic,copy,readonly) NSString * imagesJSONContentPayload; 
@property (nonatomic,readonly) BOOL isEvod; 
@property (nonatomic,copy) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * UTSContentType;                                 //@synthesize UTSContentType=_UTSContentType - In the implementation block
@property (nonatomic,copy) NSString * URLFormatString;                                //@synthesize URLFormatString=_URLFormatString - In the implementation block
@property (nonatomic,copy) NSNumber * imageHeight;                                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,copy) NSNumber * imageWidth;                                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy) NSString * imagesJSONContentPayload;                       //@synthesize imagesJSONContentPayload=_imagesJSONContentPayload - In the implementation block
@property (assign,nonatomic) BOOL isEvod;                                             //@synthesize isEvod=_isEvod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setImageWidth:(NSNumber *)arg1 ;
-(void)setImageHeight:(NSNumber *)arg1 ;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(BOOL)isEvod;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)UTSContentType;
-(NSString *)URLFormatString;
-(NSString *)imagesJSONContentPayload;
-(void)setUTSContentType:(NSString *)arg1 ;
-(void)setURLFormatString:(NSString *)arg1 ;
-(void)setImagesJSONContentPayload:(NSString *)arg1 ;
@end

