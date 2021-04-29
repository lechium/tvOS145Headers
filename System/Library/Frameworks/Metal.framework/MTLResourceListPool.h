/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@interface MTLResourceListPool : NSObject {

	MTLResourceListPoolPrivate* _priv;
	int _resourceListCapacity;

}
-(void)dealloc;
-(int)availableCount;
-(void)purge;
-(id)initWithResourceListCapacity:(int)arg1 ;
@end

