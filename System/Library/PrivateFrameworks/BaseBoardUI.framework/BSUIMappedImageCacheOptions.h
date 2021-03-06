/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BSPathProviding;
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {

	id<BSPathProviding> _containerPathProvider;

}

@property (nonatomic,readonly) id<BSPathProviding> containerPathProvider; 
+(id)optionsWithContainerPathProvider:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<BSPathProviding>)containerPathProvider;
@end

