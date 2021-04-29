/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIKeyboardMediaHostProtocol <NSObject>
@required
-(void)presentCard;
-(void)dismissCard;
-(void)pasteImageAtFileHandle:(id)arg1;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1;
-(void)draggedStickerToPoint:(CGPoint)arg1;

@end

