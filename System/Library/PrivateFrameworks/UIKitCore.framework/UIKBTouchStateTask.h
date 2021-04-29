/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBTouchState;

@interface UIKBTouchStateTask : NSObject <NSCopying> {

	UIKBTouchState* _touchState;
	/*^block*/id _task;
	BOOL _isBusy;

}

@property (nonatomic,retain,readonly) UIKBTouchState * touchState;              //@synthesize touchState=_touchState - In the implementation block
@property (nonatomic,copy,readonly) id task;                                    //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                                       //@synthesize isBusy=_isBusy - In the implementation block
+(id)touchStateTaskForTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)task;
-(BOOL)isBusy;
-(void)setIsBusy:(BOOL)arg1 ;
-(UIKBTouchState *)touchState;
-(id)initWithTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
@end
