/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSString, BSAction;

@interface UISceneProposalAction : BSAction

@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,copy,readonly) BSAction * action; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BSAction *)action;
-(NSString *)sceneIdentifier;
-(long long)UIActionType;
-(id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

