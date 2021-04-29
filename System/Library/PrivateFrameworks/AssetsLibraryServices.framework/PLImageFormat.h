/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString;

@interface PLImageFormat : NSObject {

	BOOL _isCropped;
	BOOL _isAlwaysFullScreen;
	unsigned short _formatID;
	NSString* _name;
	double _dimension;
	long long _formatMode;
	long long _version;
	long long _thumbnailKind;
	CGSize _size;

}

@property (assign,nonatomic) unsigned short formatID;                        //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) long long thumbnailKind;                        //@synthesize thumbnailKind=_thumbnailKind - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isCropped;                               //@synthesize isCropped=_isCropped - In the implementation block
@property (nonatomic,readonly) double dimension;                             //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) long long formatMode;                         //@synthesize formatMode=_formatMode - In the implementation block
@property (nonatomic,readonly) BOOL isSquare; 
@property (nonatomic,readonly) BOOL dimensionsReferToShortSide; 
@property (nonatomic,readonly) BOOL isTable; 
@property (nonatomic,readonly) BOOL isThumbnail; 
@property (nonatomic,readonly) BOOL isAlwaysFullScreen;                      //@synthesize isAlwaysFullScreen=_isAlwaysFullScreen - In the implementation block
@property (nonatomic,readonly) long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL refersToLatestVersion; 
@property (nonatomic,readonly) BOOL refersToUnadjustedVersion; 
@property (nonatomic,readonly) BOOL refersToPenultimateVersion; 
@property (nonatomic,readonly) BOOL refersToOriginalVersion; 
+(id)_syncFormats;
+(id)formatWithID:(unsigned short)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(CGSize)size;
-(long long)compare:(id)arg1 ;
-(long long)version;
-(double)dimension;
-(id)shortDescription;
-(unsigned short)formatID;
-(void)setFormatID:(unsigned short)arg1 ;
-(BOOL)_canDegradeToFormat:(id)arg1 ;
-(BOOL)_isAcceptableForViewSize:(CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(CGSize)arg4 demoteFactor:(double)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7 ;
-(id)initWithFormatID:(unsigned short)arg1 ;
-(BOOL)isEqualToFormat:(id)arg1 ;
-(BOOL)refersToLatestVersion;
-(BOOL)refersToUnadjustedVersion;
-(BOOL)refersToPenultimateVersion;
-(BOOL)refersToOriginalVersion;
-(BOOL)isSquare;
-(BOOL)isTable;
-(BOOL)isThumbnail;
-(BOOL)dimensionsReferToShortSide;
-(unsigned long long)fullSizeDesiredLongSide;
-(unsigned long long)fullSizeMinShortSide;
-(unsigned long long)fullSizeMaxLongSide;
-(CGSize)_shortSideFormatScaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 ;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(id)thumbnailSpecification;
-(BOOL)isCropped;
-(long long)formatMode;
-(BOOL)isAlwaysFullScreen;
-(long long)thumbnailKind;
-(void)setThumbnailKind:(long long)arg1 ;
@end
