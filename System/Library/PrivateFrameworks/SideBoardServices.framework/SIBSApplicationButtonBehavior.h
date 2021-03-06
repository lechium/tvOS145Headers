/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardServices.framework/SideBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SIBSApplicationButtonBehavior : NSObject <NSSecureCoding> {

	long long _gesture;
	long long _action;
	long long _actionAgent;

}

@property (nonatomic,readonly) long long gesture;                //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,readonly) long long action;                 //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long actionAgent;              //@synthesize actionAgent=_actionAgent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(long long)gesture;
-(long long)actionAgent;
-(id)initWithGesture:(long long)arg1 action:(long long)arg2 ;
-(void)setActionAgent:(long long)arg1 ;
@end

