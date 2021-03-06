/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RBSProcessHandle, NSSet;

@interface FBSceneClientHandshake : NSObject {

	RBSProcessHandle* _handle;
	NSSet* _remnants;

}

@property (nonatomic,readonly) RBSProcessHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remnants;                  //@synthesize remnants=_remnants - In the implementation block
-(id)description;
-(id)init;
-(RBSProcessHandle *)handle;
-(id)_initWithHandle:(id)arg1 remnants:(id)arg2 ;
-(NSSet *)remnants;
@end

