/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accessibilityIdentifier;
	NSString* _title;
	NSString* _imageName;
	UIImage* _imageIfLoaded;

}

@property (nonatomic,readonly) BOOL isLeaf; 
@property (nonatomic,readonly) BOOL isLoadingPlaceholder; 
@property (nonatomic,readonly) NSString * imageName;                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) UIImage * imageIfLoaded;                //@synthesize imageIfLoaded=_imageIfLoaded - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(id)accessibilityIdentifier;
-(NSString *)imageName;
-(void)_setImage:(id)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(BOOL)isLeaf;
-(id)_immutableCopy;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 ;
-(UIImage *)imageIfLoaded;
-(id)_mutableCopy;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)isLoadingPlaceholder;
@end

