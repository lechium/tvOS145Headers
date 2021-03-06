/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface ASCArtwork : NSObject <NSSecureCoding, NSCopying> {

	double _width;
	double _height;
	NSString* _decoration;
	NSString* _preferredCrop;
	NSString* _preferredFormat;
	id _dataSource;

}

@property (nonatomic,readonly) id dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIImage * embeddedImage; 
@property (nonatomic,copy,readonly) NSString * URLTemplate; 
@property (nonatomic,readonly) double width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSString * decoration;                   //@synthesize decoration=_decoration - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredCrop;                //@synthesize preferredCrop=_preferredCrop - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)width;
-(double)height;
-(id)dataSource;
-(NSString *)preferredFormat;
-(NSString *)URLTemplate;
-(NSString *)decoration;
-(id)initWithURLTemplate:(id)arg1 width:(double)arg2 height:(double)arg3 decoration:(id)arg4 preferredCrop:(id)arg5 preferredFormat:(id)arg6 ;
-(NSString *)preferredCrop;
-(id)makeURLWithSubstitutions:(id)arg1 ;
-(UIImage *)embeddedImage;
-(id)initWithImage:(id)arg1 decoration:(id)arg2 ;
@end

