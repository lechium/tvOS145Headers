/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _TVContentRatingBadgeDescriptor : NSObject {

	BOOL _templatedImage;
	NSString* _resourceName;

}

@property (nonatomic,copy,readonly) NSString * resourceName;                             //@synthesize resourceName=_resourceName - In the implementation block
@property (getter=isTemplatedImage,nonatomic,readonly) BOOL templatedImage;              //@synthesize templatedImage=_templatedImage - In the implementation block
-(NSString *)resourceName;
-(id)initWithResourceName:(id)arg1 isTemplatedImage:(BOOL)arg2 ;
-(BOOL)isTemplatedImage;
@end
