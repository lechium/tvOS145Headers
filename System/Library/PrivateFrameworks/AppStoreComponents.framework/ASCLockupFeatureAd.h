/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCLockupFeature.h>

@class NSString, ASCScreenshots, ASCTrailers;

@interface ASCLockupFeatureAd : NSObject <ASCLockupFeature> {

	BOOL _isEditorsChoice;
	float _productRating;
	NSString* _productRatingBadge;
	NSString* _productDescription;
	ASCScreenshots* _screenshots;
	ASCTrailers* _trailers;

}

@property (nonatomic,readonly) BOOL isEditorsChoice;                            //@synthesize isEditorsChoice=_isEditorsChoice - In the implementation block
@property (nonatomic,readonly) float productRating;                             //@synthesize productRating=_productRating - In the implementation block
@property (nonatomic,copy,readonly) NSString * productRatingBadge;              //@synthesize productRatingBadge=_productRatingBadge - In the implementation block
@property (nonatomic,copy,readonly) NSString * productDescription;              //@synthesize productDescription=_productDescription - In the implementation block
@property (nonatomic,copy,readonly) ASCScreenshots * screenshots;               //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,copy,readonly) ASCTrailers * trailers;                     //@synthesize trailers=_trailers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASCTrailers *)trailers;
-(ASCScreenshots *)screenshots;
-(id)initWithEditorsChoice:(BOOL)arg1 productRating:(float)arg2 productRatingBadge:(id)arg3 productDescription:(id)arg4 screenshots:(id)arg5 trailers:(id)arg6 ;
-(BOOL)isEditorsChoice;
-(float)productRating;
-(NSString *)productRatingBadge;
-(NSString *)productDescription;
@end

