/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVImageProxyProtocol.h>

@class UIImage, NSString;

@interface AVInfoPanelNavigationMarkerImage : NSObject <AVImageProxyProtocol> {

	UIImage* _image;
	CGSize _proxySize;

}

@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize proxySize;                      //@synthesize proxySize=_proxySize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)image;
-(id)initWithImage:(id)arg1 ;
-(CGSize)proxySize;
-(void)setProxySize:(CGSize)arg1 ;
@end

