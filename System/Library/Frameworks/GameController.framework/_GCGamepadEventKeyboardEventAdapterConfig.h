/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {

	UsagePage_Usage_Pair _mappings[41];

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3 ;
-(long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2 ;
@end

