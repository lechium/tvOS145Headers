/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

	NSMutableAttributedString* mutableAttributedString;

}
-(void)dealloc;
-(unsigned long long)length;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithMutableAttributedString:(id)arg1 ;
@end

