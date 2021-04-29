/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImage.h>
@class NSData, NSString, NSDictionary;


@protocol SFImage <NSObject>
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(CGSize)size;
-(NSString *)identifier;
-(int)source;
-(void)setSource:(int)arg1;
-(void)setIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(id)arg1;
-(void)setScale:(double)arg1;
-(void)setSize:(CGSize)arg1;
-(NSData *)imageData;
-(BOOL)isTemplate;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1;
-(void)setIsTemplate:(BOOL)arg1;
-(void)setImageData:(id)arg1;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1;
-(NSString *)keyColor;
-(void)setKeyColor:(id)arg1;
-(int)cornerRoundingStyle;
-(void)setCornerRoundingStyle:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	int _source;
	int _cornerRoundingStyle;
	NSData* _imageData;
	double _cornerRadius;
	double _scale;
	NSString* _contentType;
	NSString* _keyColor;
	NSString* _identifier;
	CGSize _size;

}

@property (copy) NSData * imageData;                                                 //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                        //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                                //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * keyColor;                                      //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int source;                                             //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int cornerRoundingStyle;                                //@synthesize cornerRoundingStyle=_cornerRoundingStyle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSData *)imageData;
-(BOOL)isTemplate;
-(BOOL)hasSource;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)hasSize;
-(BOOL)hasScale;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(NSString *)keyColor;
-(void)setKeyColor:(NSString *)arg1 ;
-(int)cornerRoundingStyle;
-(void)setCornerRoundingStyle:(int)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasIsTemplate;
-(BOOL)hasShouldCropToCircle;
-(BOOL)hasCornerRadius;
-(BOOL)hasCornerRoundingStyle;
@end

