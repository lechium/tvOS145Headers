/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileContainerManager/MobileContainerManager-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface MCMLazyDescription : NSString {

	/*^block*/id _block;
	NSString* _value;

}
-(id)description;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)redactedDescription;
-(id)initWithDescriber:(/*^block*/id)arg1 ;
@end

