/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIDictationConnectionFilterState : NSObject {

	CFStringRef _transform;
	/*^block*/id _pendingDictationCommand;

}

@property (assign,nonatomic) CFStringRef transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) id pendingDictationCommand;              //@synthesize pendingDictationCommand=_pendingDictationCommand - In the implementation block
-(CFStringRef)transform;
-(void)setTransform:(CFStringRef)arg1 ;
-(void)setPendingDictationCommand:(id)arg1 ;
-(id)pendingDictationCommand;
@end
