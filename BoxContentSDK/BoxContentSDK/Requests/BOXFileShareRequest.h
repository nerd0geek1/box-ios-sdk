//
//  BOXFileShareRequest.h
//  BoxContentSDK
//

#import "BOXItemShareRequest.h"

@interface BOXFileShareRequest : BOXItemShareRequest

@property (nonatomic, readonly, strong) NSString *fileID;

- (instancetype)initWithFileID:(NSString *)fileID;
- (void)performRequestWithCompletion:(BOXFileBlock)completionBlock;

@end
