/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLColorSpace : NSObject {

	NSString* _colorSpaceName;

}

@property (nonatomic,copy) NSString * colorSpaceName;              //@synthesize colorSpaceName=_colorSpaceName - In the implementation block
+(id)commonColorSpace_sRGB;
+(id)colorSpaceFromName:(id)arg1 ;
+(id)commonColorSpace_unspecified;
+(id)commonColorSpace_displaySpace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 ;
-(NSString *)colorSpaceName;
-(void)setColorSpaceName:(NSString *)arg1 ;
@end

