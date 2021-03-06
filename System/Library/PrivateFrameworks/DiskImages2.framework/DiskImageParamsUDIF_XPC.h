/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsXPC.h>

@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {

	unique_ptr<udif::header, std::__1::default_delete<udif::header>>* _header;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)blockSize;
-(BOOL)isWritableFormat;
-(id)initWithBackendXPC:(id)arg1 header:(unique_ptr<udif::header, std::__1::default_delete<udif::header>>*)arg2 ;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage>>*)createDiskImage;
-(unsigned long long)numBlocks;
@end

