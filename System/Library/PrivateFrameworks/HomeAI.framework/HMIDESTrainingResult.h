/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMIDESTrainingResult : HMFObject {

	NSArray* _layerParameters;
	NSArray* _losses;

}

@property (readonly) NSArray * layerParameters;              //@synthesize layerParameters=_layerParameters - In the implementation block
@property (readonly) NSArray * losses;                       //@synthesize losses=_losses - In the implementation block
-(NSArray *)losses;
-(NSArray *)layerParameters;
-(id)initWithLayerParameters:(id)arg1 losses:(id)arg2 ;
@end

