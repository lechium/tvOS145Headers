/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXGLayout;

@interface PXGFence : NSObject {

	unsigned long long _type;
	PXGLayout* _layout;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(id)init;
-(unsigned long long)type;
-(PXGLayout *)layout;
-(id)initWithLayout:(id)arg1 type:(unsigned long long)arg2 ;
@end

