/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKImageRequestDelegate.h>

@interface GameCenterUI.ArtworkLoader : _UKNOWN_SUPERCLASS_ <GKImageRequestDelegate> {

	 resourceLoader;
	 accessQueue;
	 completionHandlers;
	 requestCompletionMap;
	 isOccluded;

}
-(void)imageRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)imageRequest:(id)arg1 didLoadImage:(id)arg2 ;
@end
